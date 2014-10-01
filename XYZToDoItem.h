//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Citrixer on 9/30/14.
//  Copyright (c) 2014 ABC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject


@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
