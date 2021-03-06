/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

@interface EBReaderState : EBState {

	XlBinaryReader* mXlReader;
	XlSheetInfoTable* mXlSheetInfoTable;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	XlEshObjectFactory* mXlEshObjectFactory;
	OABReaderState* mOAState;
	BOOL mImportCSV;

}

@property (assign,nonatomic) BOOL importCSV; 
-(void)dealloc;
-(id)oaState;
-(id)columnWidthConvertor;
-(void)reportWarning:(id)arg1 ;
-(XlBinaryReader*)xlReader;
-(id)initWithXlReader:(XlBinaryReader*)arg1 cancelDelegate:(id)arg2 ;
-(void)pauseReading;
-(void)resumeReading;
-(void)readGlobalXlObjects;
-(XlSheetInfoTable*)xlSheetInfoTable;
-(BOOL)importCSV;
-(void)setImportCSV:(BOOL)arg1 ;
@end

