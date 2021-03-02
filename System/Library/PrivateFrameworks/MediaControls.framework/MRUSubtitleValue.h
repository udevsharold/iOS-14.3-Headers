/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MRUSubtitleValue : NSObject {

	NSString* _text;
	long long _accessory;

}

@property (nonatomic,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long accessory;              //@synthesize accessory=_accessory - In the implementation block
-(NSString *)text;
-(long long)accessory;
-(id)description;
-(id)initWithText:(id)arg1 accessory:(long long)arg2 ;
-(BOOL)isEqualToSubtitleValue:(id)arg1 ;
@end
