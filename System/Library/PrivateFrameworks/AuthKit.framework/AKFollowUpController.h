/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKFollowUpProvider.h>

@class FLFollowUpController, NSString;

@interface AKFollowUpController : NSObject <AKFollowUpProvider> {

	FLFollowUpController* _followupController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFLFollowupController:(id)arg1 ;
-(id)pendingFollowUpItems:(id*)arg1 ;
-(BOOL)removeAllFollowUpItems:(id*)arg1 ;
-(BOOL)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)addFollowUpItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeFollowUpItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearNotificationsForItem:(id)arg1 error:(id*)arg2 ;
@end

