/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@class NSArray;

@interface _CNAggregateTask : CNTask {

	NSArray* _tasks;

}

@property (nonatomic,readonly) NSArray * tasks;              //@synthesize tasks=_tasks - In the implementation block
-(NSArray *)tasks;
-(id)runSubtask:(id)arg1 error:(id*)arg2 ;
-(void)cancelSubtasks;
-(id)run:(id*)arg1 ;
-(id)description;
-(BOOL)cancel;
-(id)initWithName:(id)arg1 tasks:(id)arg2 ;
@end
