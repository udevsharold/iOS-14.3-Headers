/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject {

	NSMutableDictionary* _allTasks;

}

@property (nonatomic,retain) NSMutableDictionary * allTasks;              //@synthesize allTasks=_allTasks - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)allTasks;
-(id)init;
-(void)setAllTasks:(NSMutableDictionary *)arg1 ;
-(void)registerTask:(id)arg1 ;
-(void)unregisterTask:(id)arg1 ;
@end
