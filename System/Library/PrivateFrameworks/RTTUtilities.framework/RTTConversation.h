/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray, TUCall;

@interface RTTConversation : NSObject <NSSecureCoding> {

	NSString* _callIdentifier;
	NSMutableArray* _utterances;
	TUCall* _call;

}

@property (nonatomic,retain) NSString * callIdentifier;                //@synthesize callIdentifier=_callIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * utterances;              //@synthesize utterances=_utterances - In the implementation block
@property (nonatomic,retain) TUCall * call;                            //@synthesize call=_call - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)conversationWithCall:(id)arg1 ;
+(void)conversationWithCallUID:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)conversationWithCall:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(id)conversationWithID:(id)arg1 andUtterances:(id)arg2 ;
-(TUCall *)call;
-(id)init;
-(void)setUtterances:(NSMutableArray *)arg1 ;
-(void)cleanup;
-(NSMutableArray *)utterances;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(BOOL)isEqualToConversation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)appendCharacter:(unsigned short)arg1 ;
-(NSString *)callIdentifier;
-(void)addUtterance:(id)arg1 ;
-(id)appendStringFromOtherContactPath:(id)arg1 ;
-(id)otherContactPath;
-(id)lastUtteranceForMe:(BOOL)arg1 ;
-(void)setCallIdentifier:(NSString *)arg1 ;
-(id)processBackspaceForMe:(BOOL)arg1 ;
-(id)mergeUtterancesIfPossible;
-(unsigned long long)utteranceCountForMe:(BOOL)arg1 ;
@end
