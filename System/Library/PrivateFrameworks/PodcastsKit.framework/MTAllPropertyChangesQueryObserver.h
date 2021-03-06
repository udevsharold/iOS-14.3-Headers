/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTBaseQueryObserver.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSString;

@interface MTAllPropertyChangesQueryObserver : MTBaseQueryObserver <NSFetchedResultsControllerDelegate> {

	BOOL _inCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startObserving;
-(void)notifyObservers;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)addResultsChangedHandler:(/*^block*/id)arg1 ;
@end

