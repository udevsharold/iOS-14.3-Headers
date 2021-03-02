/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVMediaSelectionOption.h>

@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(BOOL)isPlayable;
-(BOOL)_representsNilSelection;
-(void)dealloc;
-(id)_groupID;
-(id)description;
-(id)_groupMediaType;
-(BOOL)isEqual:(id)arg1 ;
-(id)group;
-(id)dictionary;
-(id)initWithGroup:(id)arg1 ;
@end
