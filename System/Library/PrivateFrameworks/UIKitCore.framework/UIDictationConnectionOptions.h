/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIDictationConnectionOptions : NSObject {

	BOOL _secureInput;
	BOOL _useAutomaticEndpointing;
	BOOL _acceptsDictationSearchResults;
	unsigned long long _version;
	unsigned long long _activationType;
	NSString* _languageCode;
	NSString* _regionCode;
	NSString* _fieldIdentifier;
	NSString* _activationIdentifier;
	NSString* _layoutIdentifier;
	long long _keyboardType;
	long long _returnKeyType;
	NSString* _prefixText;
	NSString* _selectedText;
	NSString* _postfixText;
	id _turnIdentifier;

}

@property (assign,nonatomic) unsigned long long version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long activationType;               //@synthesize activationType=_activationType - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                           //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * regionCode;                             //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,copy) NSString * fieldIdentifier;                        //@synthesize fieldIdentifier=_fieldIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activationIdentifier;                   //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * layoutIdentifier;                       //@synthesize layoutIdentifier=_layoutIdentifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;                          //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                         //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) BOOL secureInput;                                //@synthesize secureInput=_secureInput - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                    //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL acceptsDictationSearchResults;              //@synthesize acceptsDictationSearchResults=_acceptsDictationSearchResults - In the implementation block
@property (nonatomic,copy) NSString * prefixText;                             //@synthesize prefixText=_prefixText - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                           //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * postfixText;                            //@synthesize postfixText=_postfixText - In the implementation block
@property (nonatomic,copy) id turnIdentifier;                                 //@synthesize turnIdentifier=_turnIdentifier - In the implementation block
-(void)setKeyboardType:(long long)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)selectedText;
-(NSString *)activationIdentifier;
-(NSString *)languageCode;
-(NSString *)prefixText;
-(void)setRegionCode:(NSString *)arg1 ;
-(void)setPrefixText:(NSString *)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setActivationIdentifier:(NSString *)arg1 ;
-(NSString *)regionCode;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(unsigned long long)version;
-(BOOL)acceptsDictationSearchResults;
-(BOOL)secureInput;
-(NSString *)postfixText;
-(BOOL)useAutomaticEndpointing;
-(void)setAcceptsDictationSearchResults:(BOOL)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(NSString *)layoutIdentifier;
-(NSString *)fieldIdentifier;
-(void)setFieldIdentifier:(NSString *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(void)setPostfixText:(NSString *)arg1 ;
-(unsigned long long)activationType;
-(id)turnIdentifier;
-(void)setTurnIdentifier:(id)arg1 ;
-(void)setActivationType:(unsigned long long)arg1 ;
-(void)setLayoutIdentifier:(NSString *)arg1 ;
-(void)setSecureInput:(BOOL)arg1 ;
@end

