//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Kelley Levy on 2/5/14.
//  Copyright (c) 2014 Kelley Levy. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
