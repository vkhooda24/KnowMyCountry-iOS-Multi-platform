//
//  RegionSelectionViewController.swift
//  KnowYourCountry-iOS
//
//  Created by Vikram Hooda on 2/22/20.
//  Copyright © 2020 vkhooda24. All rights reserved.
//

import UIKit

class RegionSelectionViewController: UIViewController {
    
    @IBOutlet weak var americasRegion: UIButton!
    @IBOutlet weak var asiaRegion: UIButton!
    @IBOutlet weak var europeRegion: UIButton!
    @IBOutlet weak var africaRegion: UIButton!
    @IBOutlet weak var allRegion: UIButton!
    
    var regionSelected = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.title = "Choose any region"
    }
    
    @IBAction func allRegionTapped(_ sender: Any) {
        regionSelected = "All"
        performSegue(withIdentifier: "countriesListSegue", sender: self)
    }
    
    @IBAction func asiaRegionTapped(_ sender: Any) {
        regionSelected = "Asia"
        performSegue(withIdentifier: "countriesListSegue", sender: self)
    }
    
    @IBAction func americasRegionTapped(_ sender: Any) {
        regionSelected = "Americas"
        performSegue(withIdentifier: "countriesListSegue", sender: self)
    }
    
    @IBAction func europeRegionTapped(_ sender: Any) {
        regionSelected = "Europe"
        performSegue(withIdentifier: "countriesListSegue", sender: self)
    }
    
    @IBAction func africaRegionTapped(_ sender: Any) {
        regionSelected = "Africa"
        performSegue(withIdentifier: "countriesListSegue", sender: self)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        let vc = segue.destination as! CountryTableViewController
        vc.regionName = regionSelected
    }
}
