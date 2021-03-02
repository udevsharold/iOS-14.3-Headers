/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMDSettingOnChangeAttachedUpdatesResult : HMFObject {

	NSArray* _settingsToUpdate;
	NSArray* _modelsToUpdate;
	/*^block*/id _onCommitCompletion;

}

@property (readonly) NSArray * settingsToUpdate;              //@synthesize settingsToUpdate=_settingsToUpdate - In the implementation block
@property (readonly) NSArray * modelsToUpdate;                //@synthesize modelsToUpdate=_modelsToUpdate - In the implementation block
@property (readonly) id onCommitCompletion;                   //@synthesize onCommitCompletion=_onCommitCompletion - In the implementation block
-(id)initWithSettingsToUpdate:(id)arg1 models:(id)arg2 onCommitCompletion:(/*^block*/id)arg3 ;
-(NSArray *)settingsToUpdate;
-(NSArray *)modelsToUpdate;
-(id)onCommitCompletion;
@end
