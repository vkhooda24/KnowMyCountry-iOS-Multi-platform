//
//  CountryTableViewController.swift
//  KnowYourCountry-iOS
//
//  Created by Vikram Hooda on 11/10/19.
//  Copyright © 2019 vkhooda24. All rights reserved.
//

import UIKit
import xrossPlateform

class CountryTableViewController: UITableViewController, UICallback {
    
    var countriesList: [Country] = []
    var regionName = ""
    var countrySelected = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        CountryPresenter(context: UI(), uiCallback: self).getCountryList(regionName: regionName)
//        CountryPresenter(context: UI(), uiCallback: self).getCountryDetail(countryName: "India")
        
        tableView.dataSource = self
    }
    
    // MARK: - Table view data source
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 2
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        
        //need to refactor to avoid looping on title
        if(regionName.elementsEqual("All")) {
            self.title = "All countries, Total: " + String(countriesList.count)
        } else {
            self.title = regionName + " Region\'s countries, Total: " + String(countriesList.count)
        }
        
        return countriesList.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = tableView.dequeueReusableCell(withIdentifier: "LableCell", for: indexPath)
        
        cell.textLabel?.text = countriesList[indexPath.row].name

        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        countrySelected = countriesList[indexPath.row].name!
        performSegue(withIdentifier: "countrydetailsviewcontrollersegue", sender: self)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
         let vc = segue.destination as! CountryDetailsViewController
         vc.countrySelected = countrySelected
    }
    
    //Multi-platform shared code callback(UICallback)
    func countryListResponse(countryList: [Country]) {
       // print(countryList)
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
