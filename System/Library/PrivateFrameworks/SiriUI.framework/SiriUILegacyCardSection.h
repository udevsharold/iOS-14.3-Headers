/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/CRCardSection.h>

@class NSString, NSArray;

@interface SiriUILegacyCardSection : NSObject <CRCardSection> {

	NSString* _cardSectionIdentifier;

}

@property (nonatomic,retain) NSString * cardSectionIdentifier;                    //@synthesize cardSectionIdentifier=_cardSectionIdentifier - In the implementation block
@property (nonatomic,readonly) id<SFCardSection> backingCardSection; 
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)cardSectionIdentifier;
-(void)setCardSectionIdentifier:(NSString *)arg1 ;
@end

