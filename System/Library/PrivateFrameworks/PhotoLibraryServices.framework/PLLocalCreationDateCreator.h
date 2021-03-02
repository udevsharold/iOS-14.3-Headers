/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject {

	PFTimeZoneLookup* _timeZoneLookup;

}

@property (nonatomic,readonly) PFTimeZoneLookup * timeZoneLookup;              //@synthesize timeZoneLookup=_timeZoneLookup - In the implementation block
+(void)initialize;
+(id)_gmtTranslationDictionary;
-(PFTimeZoneLookup *)timeZoneLookup;
-(id)generateInferredTimeZoneOffsetForAsset:(id)arg1 ;
-(id)initWithTimeZoneLookup:(id)arg1 ;
@end
