/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLWrappedModel.h>
#import <libobjc.A.dylib/MLWritable.h>

@class NSString;

@interface MLWritableWrappedModel : MLWrappedModel <MLWritable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperAroundWritableModel:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
@end

