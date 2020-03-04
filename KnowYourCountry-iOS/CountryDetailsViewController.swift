//
//  CountryDetailsViewController.swift
//  KnowYourCountry-iOS
//
//  Created by Vikram Hooda on 2/22/20.
//  Copyright © 2020 vkhooda24. All rights reserved.
//

import UIKit
import xrossPlateform

class CountryDetailsViewController: UIViewController, CountryDetailsResponseListener {
    
    var countrySelected = ""
    
    
    @IBOutlet weak var capitalName: UILabel!
    @IBOutlet weak var nativeName: UILabel!
    @IBOutlet weak var domainName: UILabel!
    @IBOutlet weak var regionName: UILabel!
    @IBOutlet weak var subRegionName: UILabel!
    @IBOutlet weak var timezone: UILabel!
    @IBOutlet weak var population: UILabel!
    @IBOutlet weak var alphaCodeName: UILabel!
    @IBOutlet weak var flagImage: UIImageView!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.showLoadingView(onView: self.view)
        
        self.title = countrySelected + "\'s details"
        
        CountryDetailsPresenter(context: UI(), countryDetailsResponseListener: self).fetchCountryDetails(countryName: countrySelected)
    }
    
    func countryDetailResponse(countryDetail: Country) {
        
        self.removeLoadingView()
    
        capitalName.text = "Capital name: " + countryDetail.capital!
        nativeName.text = "Native name: " + countryDetail.nativeName!
//            if let domain = countryDetail.topLevelDomain[0]! as [String: Any] {
//                domainName.text = "Domain name: " + domain
//            }
        regionName.text = "Region name: " + countryDetail.region!
        subRegionName.text = "Sub region name: " + countryDetail.subregion!
//            timezone.text = "Timezon: " + countryDetail.timezones[0]
        population.text = "Population: " + countryDetail.population!
        alphaCodeName.text = "Alpha code name: " + countryDetail.alpha2Code!
    
//            var imageURL = URL(fileReferenceLiteralResourceName: countryDetail.flag!)
//
//            flagImage.load(url: imageURL)
    }
    
    func showError(error: KotlinThrowable) {
        self.removeLoadingView()
        print(error)
    }
}


extension UIImageView {
    func load(url: URL) {
        DispatchQueue.global().async { [weak self] in
            if let data = try? Data(contentsOf: url) {
                if let image = UIImage(data: data) {
                    DispatchQueue.main.async {
                        self?.image = image
                    }
                }
            }
        }
    }
}
