/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLMomentGenerationDataManagement;
@class NSSet;

@interface PLFrequentLocationManager : NSObject {

	BOOL _invalidateCurrentFrequentLocations;
	id<PLMomentGenerationDataManagement> _momentGenerationDataManager;
	NSSet* _currentFrequentLocations;

}

@property (assign,nonatomic,__weak) id<PLMomentGenerationDataManagement> momentGenerationDataManager;              //@synthesize momentGenerationDataManager=_momentGenerationDataManager - In the implementation block
@property (nonatomic,retain) NSSet * currentFrequentLocations;                                                     //@synthesize currentFrequentLocations=_currentFrequentLocations - In the implementation block
-(void)invalidateCurrentFrequentLocations;
-(id)initWithMomentGenerationDataManager:(id)arg1 ;
-(void)setCurrentFrequentLocations:(NSSet *)arg1 ;
-(NSSet *)currentFrequentLocations;
-(BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1 ;
-(id)_createFrequentLocationsWithAllMoments:(id)arg1 ;
-(void)setMomentGenerationDataManager:(id<PLMomentGenerationDataManagement>)arg1 ;
-(id<PLMomentGenerationDataManagement>)momentGenerationDataManager;
@end

