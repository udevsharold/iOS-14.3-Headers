/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDelegate;
@class TKTokenConfiguration, TKTokenDriver, TKTokenKeychainContents, TKTokenID;

@interface TKToken : NSObject {

	TKTokenConfiguration* _configuration;
	TKTokenDriver* _tokenDriver;
	id<TKTokenDelegate> _delegate;
	TKTokenKeychainContents* _keychainContents;
	TKTokenID* _tokenID;

}

@property (retain) TKTokenKeychainContents * keychainContents;              //@synthesize keychainContents=_keychainContents - In the implementation block
@property (readonly) TKTokenID * tokenID;                                   //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) TKTokenDriver * tokenDriver;                           //@synthesize tokenDriver=_tokenDriver - In the implementation block
@property (__weak) id<TKTokenDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) TKTokenConfiguration * configuration; 
-(void)terminate;
-(TKTokenID *)tokenID;
-(TKTokenConfiguration *)configuration;
-(id)description;
-(TKTokenDriver *)tokenDriver;
-(id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2 ;
-(TKTokenKeychainContents *)keychainContents;
-(void)setKeychainContents:(TKTokenKeychainContents *)arg1 ;
-(void)setDelegate:(id<TKTokenDelegate>)arg1 ;
-(id<TKTokenDelegate>)delegate;
@end
