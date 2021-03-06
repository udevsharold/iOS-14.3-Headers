/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelRequest, MPPropertySet, MPSectionedCollection;

@interface MPModelResponse : NSObject {

	BOOL _valid;
	MPModelRequest* _request;
	MPPropertySet* _deferredSectionProperties;
	MPPropertySet* _deferredItemProperties;
	MPSectionedCollection* _results;

}

@property (nonatomic,retain) MPPropertySet * deferredSectionProperties;              //@synthesize deferredSectionProperties=_deferredSectionProperties - In the implementation block
@property (nonatomic,retain) MPPropertySet * deferredItemProperties;                 //@synthesize deferredItemProperties=_deferredItemProperties - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * results;                          //@synthesize results=_results - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) MPModelRequest * request;                        //@synthesize request=_request - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isEmpty;
-(id)init;
-(MPSectionedCollection *)results;
-(MPModelRequest *)request;
-(void)setResults:(MPSectionedCollection *)arg1 ;
-(void)_invalidate;
-(BOOL)isValid;
-(void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPPropertySet *)deferredSectionProperties;
-(void)setDeferredSectionProperties:(MPPropertySet *)arg1 ;
-(MPPropertySet *)deferredItemProperties;
-(void)setDeferredItemProperties:(MPPropertySet *)arg1 ;
-(id)description;
-(id)debugDescription;
@end

