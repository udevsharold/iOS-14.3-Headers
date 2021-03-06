/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NUPixelFormat, NUColorSpace;


@protocol NUDisplay <NSObject>
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (readonly) NUPixelFormat * pixelFormat; 
@property (readonly) NUColorSpace * colorSpace; 
@required
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)pixelFormat;
-(SCD_Struct_NU7)size;
-(id)identifier;
-(NSString *)name;

@end

