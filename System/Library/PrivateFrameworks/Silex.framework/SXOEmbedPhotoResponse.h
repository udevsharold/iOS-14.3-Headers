/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXOEmbedResponse.h>

@class NSURL;

@interface SXOEmbedPhotoResponse : SXOEmbedResponse

@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) CGSize size; 
-(NSURL *)URL;
-(double)height;
-(double)width;
-(CGSize)size;
@end

