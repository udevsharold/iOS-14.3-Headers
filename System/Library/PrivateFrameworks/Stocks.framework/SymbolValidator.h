/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@class NSArray;

@interface SymbolValidator : YQLRequest {

	NSArray* _symbols;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)delegate;
-(void)didParseData;
-(void)validateSymbol:(id)arg1 withMaxResults:(int)arg2 ;
@end

