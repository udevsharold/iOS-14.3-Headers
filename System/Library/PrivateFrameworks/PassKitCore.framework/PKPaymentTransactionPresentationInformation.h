/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPaymentTransactionPresentationInformation : NSObject {

	BOOL _destructiveSecondaryString;
	BOOL _shouldGrayValue;
	BOOL _shouldStrikeValue;
	BOOL _shouldShowDisclosure;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	NSString* _rewardsString;
	NSString* _valueString;

}

@property (nonatomic,retain) NSString * primaryString;                     //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                   //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                    //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (assign,nonatomic) BOOL destructiveSecondaryString;              //@synthesize destructiveSecondaryString=_destructiveSecondaryString - In the implementation block
@property (nonatomic,retain) NSString * rewardsString;                     //@synthesize rewardsString=_rewardsString - In the implementation block
@property (nonatomic,retain) NSString * valueString;                       //@synthesize valueString=_valueString - In the implementation block
@property (assign,nonatomic) BOOL shouldGrayValue;                         //@synthesize shouldGrayValue=_shouldGrayValue - In the implementation block
@property (assign,nonatomic) BOOL shouldStrikeValue;                       //@synthesize shouldStrikeValue=_shouldStrikeValue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDisclosure;                    //@synthesize shouldShowDisclosure=_shouldShowDisclosure - In the implementation block
-(void)setPrimaryString:(NSString *)arg1 ;
-(NSString *)primaryString;
-(BOOL)shouldShowDisclosure;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)valueString;
-(void)setValueString:(NSString *)arg1 ;
-(NSString *)rewardsString;
-(NSString *)secondaryString;
-(void)setTertiaryString:(NSString *)arg1 ;
-(BOOL)destructiveSecondaryString;
-(void)setDestructiveSecondaryString:(BOOL)arg1 ;
-(void)setRewardsString:(NSString *)arg1 ;
-(BOOL)shouldGrayValue;
-(void)setShouldGrayValue:(BOOL)arg1 ;
-(BOOL)shouldStrikeValue;
-(void)setShouldStrikeValue:(BOOL)arg1 ;
-(void)setShouldShowDisclosure:(BOOL)arg1 ;
-(NSString *)tertiaryString;
@end
