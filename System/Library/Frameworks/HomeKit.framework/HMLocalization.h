/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSArray, NSBundle;

@interface HMLocalization : NSObject {

	HMFUnfairLock* _lock;
	NSArray* _stringTable;
	NSBundle* _bundle;

}

@property (copy,readonly) NSArray * stringTable;              //@synthesize stringTable=_stringTable - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSArray *)stringTable;
-(id)getLocalizedString:(id)arg1 ;
-(id)getLocalizedOrCustomString:(id)arg1 ;
-(void)_updateLocalizedStrings;
-(void)handleLocaleDidChange:(id)arg1 ;
@end
