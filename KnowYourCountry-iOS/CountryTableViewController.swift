//
//  CountryTableViewController.swift
//  KnowYourCountry-iOS
//
//  Created by Vikram Hooda on 11/10/19.
//  Copyright © 2019 vkhooda24. All rights reserved.
//

import UIKit
import sharedMPP

class CountryTableViewController: UITableViewController, UICallback {
    
    var countriesList: [Country] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //Data from server call
//        CountryPresenter(context: UI(), uiCallback: self).getCountryList(regionName: "Oceania")
//        CountryPresenter(context: UIBlocker(), uiCallback: self).getCountryDetail(countryName: "India")
        
        //Data from Json
        CountryPresenter(context: UIBlocker(), uiCallback: self).getCountryListFromJson(regionName: "Oceania")
//        CountryPresenter(context: UIBlocker(), uiCallback: self).getCountryDetailFromJson(countryName: "India")

        tableView.dataSource = self
    }
    
    // MARK: - Table view data source
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 2
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return countriesList.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "LableCell", for: indexPath)

        cell.textLabel?.textColor = UIColor.red
        cell.textLabel?.text = countriesList[indexPath.row].name

        return cell
    }
    
    //Multi-platform shared code callback(UICallback)
    func countryListResponse(countryList: [Country]) {
        print(countryList)
        countriesList = countryList
        tableView.reloadData()
    }
    
    func countryDetailResponse(countryDetail: Country) {
        print(countryDetail)
    }
    
    func showError(error: KotlinThrowable) {
        print(error)
    }
}
