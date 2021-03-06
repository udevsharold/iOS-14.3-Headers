/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTBaseQueryObserver.h>

@class NSSet, NSArray;

@interface MTUuidQueryObserver : MTBaseQueryObserver {

	NSSet* _uuidSet;
	NSArray* _uuidOrder;

}

@property (nonatomic,retain) NSSet * uuidSet;                  //@synthesize uuidSet=_uuidSet - In the implementation block
@property (nonatomic,retain) NSArray * uuidOrder;              //@synthesize uuidOrder=_uuidOrder - In the implementation block
-(void)startObserving;
-(NSSet *)uuidSet;
-(void)notifyObservers;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)setUuidSet:(NSSet *)arg1 ;
-(id)addResultsChangedHandler:(/*^block*/id)arg1 ;
-(NSArray *)uuidOrder;
-(void)setUuidOrder:(NSArray *)arg1 ;
@end

