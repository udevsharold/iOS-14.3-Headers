/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEIKEv2TransportDelegate;
@class NEIKEv2IKESPI;

@interface NEIKEv2TransportClient : NSObject {

	BOOL _wildcard;
	NEIKEv2IKESPI* _clientSPI;
	id<NEIKEv2TransportDelegate> _delegate;

}

@property (retain) NEIKEv2IKESPI * clientSPI;                          //@synthesize clientSPI=_clientSPI - In the implementation block
@property (assign) BOOL wildcard;                                      //@synthesize wildcard=_wildcard - In the implementation block
@property (__weak) id<NEIKEv2TransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)wildcard;
-(NEIKEv2IKESPI *)clientSPI;
-(void)setClientSPI:(NEIKEv2IKESPI *)arg1 ;
-(void)setWildcard:(BOOL)arg1 ;
-(id)description;
-(void)setDelegate:(id<NEIKEv2TransportDelegate>)arg1 ;
-(id<NEIKEv2TransportDelegate>)delegate;
@end
