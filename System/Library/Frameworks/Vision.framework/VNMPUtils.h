/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNMPUtils : NSObject
+(double)getHostTime;
+(unsigned long long)getHostTimeInNanos;
+(id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2 ;
+(void)freeVImageBuffer:(vImage_Buffer*)arg1 ;
+(long long)parseExifTimestamp:(id)arg1 ;
@end

