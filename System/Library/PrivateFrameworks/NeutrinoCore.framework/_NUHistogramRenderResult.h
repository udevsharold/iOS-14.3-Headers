/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUHistogramRenderResult.h>

@class NUImageHistogram, NSString;

@interface _NUHistogramRenderResult : _NURenderResult <NUHistogramRenderResult> {

	NUImageHistogram* _histogram;

}

@property (readonly) NUImageHistogram * histogram;                   //@synthesize histogram=_histogram - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHistogram:(id)arg1 ;
-(NUImageHistogram *)histogram;
@end
