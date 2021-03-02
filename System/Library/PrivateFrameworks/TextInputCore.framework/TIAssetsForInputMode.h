/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject {

	NSMutableDictionary* _assetsByInputModeLevel;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(id)initWithInputMode:(id)arg1 ;
-(NSString *)inputMode;
-(void)dealloc;
-(id)recursiveDescription;
-(id)assetContentItemsMatching:(id)arg1 ;
-(void)addAssetsForInputModeLevel:(id)arg1 ;
-(void)removeAllInputModeLevels;
@end
