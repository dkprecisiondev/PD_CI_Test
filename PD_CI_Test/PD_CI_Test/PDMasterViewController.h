//
//  PDMasterViewController.h
//  PD_CI_Test
//
//  Created by David de Jesus on 11/5/13.
//  Copyright (c) 2013 Precision Development. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PDDetailViewController;

#import <CoreData/CoreData.h>

@interface PDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) PDDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
