/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PPMeCardCache : NSObject {

	NSString* _path;

}
-(id)initWithPath:(id)arg1 ;
-(BOOL)deleteMeCardCache;
-(id)init;
-(BOOL)writeMeCardCache:(id)arg1 ;
-(id)_dateComponentsFromCachedDateComponents:(id)arg1 ;
-(id)_cachedDateComponentsFromDateComponents:(id)arg1 ;
-(id)loadMeCardCache;
@end
