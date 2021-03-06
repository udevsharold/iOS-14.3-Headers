/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection {

	VUITVSeriesManagedObject* _seriesManagedObject;

}

@property (nonatomic,retain) VUITVSeriesManagedObject * seriesManagedObject;              //@synthesize seriesManagedObject=_seriesManagedObject - In the implementation block
-(id)isLocal;
-(id)canonicalID;
-(id)title;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)seasonCount;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(VUITVSeriesManagedObject *)seriesManagedObject;
-(void)setSeriesManagedObject:(VUITVSeriesManagedObject *)arg1 ;
@end

