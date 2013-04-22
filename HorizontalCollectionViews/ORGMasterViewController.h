//
//  ORGMasterViewController.h
//  HorizontalCollectionViews
//
//  Created by James Clark on 4/22/13.
//  Copyright (c) 2013 OrgSync, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ORGDetailViewController;

@interface ORGMasterViewController : UITableViewController

@property (strong, nonatomic) ORGDetailViewController *detailViewController;

@end
