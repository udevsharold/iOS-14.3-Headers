/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface SFMessageSessionRequestEntry : NSObject {

	BOOL _allowUnencrypted;
	/*^block*/id _handler;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL allowUnencrypted;              //@synthesize allowUnencrypted=_allowUnencrypted - In the implementation block
@property (nonatomic,copy) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSDictionary * options;               //@synthesize options=_options - In the implementation block
-(id)handler;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
@end
