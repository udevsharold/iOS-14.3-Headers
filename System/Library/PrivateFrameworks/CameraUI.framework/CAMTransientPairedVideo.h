/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL;

@interface CAMTransientPairedVideo : NSObject {

	NSURL* _url;
	long long _filterType;
	SCD_Struct_CA7 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 stillDisplayTime;              //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,readonly) long long filterType;                         //@synthesize filterType=_filterType - In the implementation block
-(long long)filterType;
-(SCD_Struct_CA7)stillDisplayTime;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 stillDisplayTime:(SCD_Struct_CA7)arg2 filterType:(long long)arg3 ;
@end

