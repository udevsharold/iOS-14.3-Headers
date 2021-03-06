/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFDefinitionContainer;
@interface NFCallbackDefinition : NSObject {

	/*^block*/id _callbackBlock;
	id<NFDefinitionContainer> _privateContainer;

}

@property (nonatomic,readonly) id callbackBlock;                                        //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) id<NFDefinitionContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
-(id<NFDefinitionContainer>)privateContainer;
-(id)callbackBlock;
-(id)initWithCallbackBlock:(/*^block*/id)arg1 privateContainer:(id)arg2 ;
@end

