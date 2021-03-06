/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString, NSArray, NSEnumerator;

@interface AVAssetTrackEnumerator : NSEnumerator {

	NSString* _mediaType;
	NSArray* _mediaCharacteristics;
	NSEnumerator* _enumerator;

}
+(id)trackEnumeratorWithAsset:(id)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(id)nextObject;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 mediaType:(id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2 ;
-(void)setMediaCharacteristics:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
@end

