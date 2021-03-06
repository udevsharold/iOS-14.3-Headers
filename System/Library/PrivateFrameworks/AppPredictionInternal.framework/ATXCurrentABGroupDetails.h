/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ATXCurrentABGroupDetails : NSObject {

	NSMutableDictionary* _subTypeToABGroup;
	NSMutableDictionary* _subTypeToFinalSubscore;

}

@property (nonatomic,readonly) NSMutableDictionary * subTypeToABGroup;                    //@synthesize subTypeToABGroup=_subTypeToABGroup - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * subTypeToFinalSubscore;              //@synthesize subTypeToFinalSubscore=_subTypeToFinalSubscore - In the implementation block
-(id)init;
-(id)finalSubScoreForConsumerSubType:(unsigned char)arg1 ;
-(id)abGroupIdentifierForConsumerSubType:(unsigned char)arg1 ;
-(id)initWithAssetMapping:(id)arg1 ;
-(void)loadAssetFromAssetMapping:(id)arg1 ;
-(void)setFinalSubscore:(id)arg1 subType:(unsigned char)arg2 ;
-(void)setABGroupFromFilename:(id)arg1 subType:(unsigned char)arg2 filenameToABGroup:(id)arg3 ;
-(NSMutableDictionary *)subTypeToFinalSubscore;
-(id)abGroupIdentifierForFilename:(id)arg1 ;
-(NSMutableDictionary *)subTypeToABGroup;
@end

