/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader, WXReadState;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;
	WXReadState* mXmlDocumentState;

}

@property (assign,nonatomic,__weak) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(id)initWithClient:(Class)arg1 ;
-(WBReader *)reader;
-(void)setReader:(WBReader *)arg1 ;
-(id)xmlDrawingState;
-(void)setCurrentTextType:(int)arg1 ;
-(int)currentTextType;
@end
