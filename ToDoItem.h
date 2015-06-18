//
//  ToDoItem.h
//  ToDoList
//
//  Created by Marcin on 6/10/15.
//  Copyright (c) 2015 Marcin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL isCompleted;
@property (readonly) NSDate *creationDate;

@end
