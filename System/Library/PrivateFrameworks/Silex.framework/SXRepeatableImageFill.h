/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFill.h>

@class NSString;

@interface SXRepeatableImageFill : SXFill

@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) SXConvertibleValue width; 
@property (nonatomic,readonly) SXConvertibleValue height; 
@property (nonatomic,readonly) unsigned long long repeat; 
-(unsigned long long)repeat;
-(SXConvertibleValue)height;
-(SXConvertibleValue)width;
-(NSString *)imageIdentifier;
-(unsigned long long)repeatWithValue:(id)arg1 withType:(int)arg2 ;
@end

