/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIStoreAcquisitionProperties;

@interface VUIAcquisitionRequest : NSObject {

	BOOL _cancelled;
	VUIStoreAcquisitionProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) VUIStoreAcquisitionProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                      //@synthesize cancelled=_cancelled - In the implementation block
-(void)setCancelled:(BOOL)arg1 ;
-(id)completionBlock;
-(void)setProperties:(VUIStoreAcquisitionProperties *)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)isCancelled;
-(VUIStoreAcquisitionProperties *)properties;
@end
