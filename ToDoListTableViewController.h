//
//  ToDoListTableViewController.h
//  ToDoList
//
//  Created by Marcin on 6/9/15.
//  Copyright (c) 2015 Marcin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoListTableViewController : UITableViewController
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@property NSMutableArray *toToItems;

@end
