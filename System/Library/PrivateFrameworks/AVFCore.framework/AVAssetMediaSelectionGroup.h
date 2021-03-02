/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVMediaSelectionGroup.h>

@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {

	AVAsset* _asset;
	NSDictionary* _dictionary;
	NSArray* _groupMediaCharacteristics;
	NSArray* _options;
	AVMediaSelectionOption* _defaultOption;
	BOOL _isStreamingGroup;

}
-(id)asset;
-(BOOL)_isStreamingGroup;
-(id)init;
-(id)defaultOption;
-(void)dealloc;
-(unsigned long long)hash;
-(id)initWithAsset:(id)arg1 dictionary:(id)arg2 ;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(id)dictionary;
-(id)options;
@end
