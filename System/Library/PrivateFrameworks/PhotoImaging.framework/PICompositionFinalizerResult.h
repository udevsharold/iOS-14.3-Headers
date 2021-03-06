/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUComposition;

@interface PICompositionFinalizerResult : NSObject {

	long long _disposition;
	NUComposition* _composition;

}

@property (readonly) long long disposition;                         //@synthesize disposition=_disposition - In the implementation block
@property (copy,readonly) NUComposition * composition;              //@synthesize composition=_composition - In the implementation block
-(long long)disposition;
-(NUComposition *)composition;
-(id)initWithDisposition:(long long)arg1 composition:(id)arg2 ;
@end

