/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRCard.h>

@class NSArray, NSSet, NSString, SFCard;

@interface CRBasicCard : NSObject <CRCard> {

	NSString* _cardIdentifier;
	unsigned long long cardFormat;
	NSArray* _cardSections;
	NSSet* _interactions;
	NSArray* _dismissalCommands;

}

@property (nonatomic,retain) NSArray * cardSections;                        //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,retain) NSSet * interactions;                          //@synthesize interactions=_interactions - In the implementation block
@property (nonatomic,retain) NSArray * dismissalCommands;                   //@synthesize dismissalCommands=_dismissalCommands - In the implementation block
@property (nonatomic,copy,readonly) NSString * cardIdentifier;              //@synthesize cardIdentifier=_cardIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long cardFormat; 
@property (nonatomic,readonly) BOOL asynchronous; 
@property (nonatomic,readonly) BOOL flexibleSectionOrder; 
@property (nonatomic,readonly) SFCard * backingCard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)asynchronous;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cardIdentifier;
-(NSArray *)dismissalCommands;
-(void)setDismissalCommands:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInteractions:(NSSet *)arg1 ;
-(NSArray *)cardSections;
-(NSSet *)interactions;
-(void)setCardSections:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)loadCardWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)cardFormat;
@end
