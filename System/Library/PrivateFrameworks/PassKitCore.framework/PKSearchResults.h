/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKSearchResults : NSObject <NSSecureCoding> {

	NSArray* _suggestedAutocompleteTokens;
	NSArray* _paymentPassResults;
	NSArray* _barcodePassResults;
	NSArray* _categoryResults;
	NSArray* _merchantResults;
	NSArray* _transactionResults;
	NSArray* _personResults;
	NSArray* _locationResults;

}

@property (nonatomic,copy) NSArray * suggestedAutocompleteTokens;              //@synthesize suggestedAutocompleteTokens=_suggestedAutocompleteTokens - In the implementation block
@property (nonatomic,copy) NSArray * paymentPassResults;                       //@synthesize paymentPassResults=_paymentPassResults - In the implementation block
@property (nonatomic,copy) NSArray * barcodePassResults;                       //@synthesize barcodePassResults=_barcodePassResults - In the implementation block
@property (nonatomic,copy) NSArray * categoryResults;                          //@synthesize categoryResults=_categoryResults - In the implementation block
@property (nonatomic,copy) NSArray * merchantResults;                          //@synthesize merchantResults=_merchantResults - In the implementation block
@property (nonatomic,copy) NSArray * transactionResults;                       //@synthesize transactionResults=_transactionResults - In the implementation block
@property (nonatomic,copy) NSArray * personResults;                            //@synthesize personResults=_personResults - In the implementation block
@property (nonatomic,copy) NSArray * locationResults;                          //@synthesize locationResults=_locationResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)suggestedAutocompleteTokens;
-(void)setSuggestedAutocompleteTokens:(NSArray *)arg1 ;
-(NSArray *)paymentPassResults;
-(void)setPaymentPassResults:(NSArray *)arg1 ;
-(NSArray *)categoryResults;
-(NSArray *)barcodePassResults;
-(void)setBarcodePassResults:(NSArray *)arg1 ;
-(void)setCategoryResults:(NSArray *)arg1 ;
-(NSArray *)merchantResults;
-(void)setMerchantResults:(NSArray *)arg1 ;
-(NSArray *)transactionResults;
-(void)setTransactionResults:(NSArray *)arg1 ;
-(NSArray *)personResults;
-(void)setPersonResults:(NSArray *)arg1 ;
-(NSArray *)locationResults;
-(void)setLocationResults:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

