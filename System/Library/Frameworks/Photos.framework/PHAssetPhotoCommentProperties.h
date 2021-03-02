/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoCommentProperties : PHAssetPropertySet {

	BOOL _hasUserLiked;
	unsigned long long _commentCount;
	unsigned long long _likeCount;

}

@property (nonatomic,readonly) unsigned long long commentCount;              //@synthesize commentCount=_commentCount - In the implementation block
@property (nonatomic,readonly) unsigned long long likeCount;                 //@synthesize likeCount=_likeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasUserLiked;                            //@synthesize hasUserLiked=_hasUserLiked - In the implementation block
+(id)entityName;
+(BOOL)isToMany;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(unsigned long long)likeCount;
-(unsigned long long)commentCount;
-(BOOL)hasUserLiked;
@end
