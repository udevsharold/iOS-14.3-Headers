/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWFormat : NSObject

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(BOOL)arg2 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)mediaType;
@end

