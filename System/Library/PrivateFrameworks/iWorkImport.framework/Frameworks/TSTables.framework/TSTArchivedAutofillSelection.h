/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>
#import <TSTables/TSKArchivedSelection.h>

@class TSTAutofillSelection, TSKSelection, NSString;

@interface TSTArchivedAutofillSelection : TSPObject <TSKArchivedSelection> {

	TSTAutofillSelection* _autofillSelection;

}

@property (nonatomic,retain) TSTAutofillSelection * autofillSelection;              //@synthesize autofillSelection=_autofillSelection - In the implementation block
@property (nonatomic,retain) TSKSelection * selection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSKSelection *)selection;
-(void)setSelection:(TSKSelection *)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSTAutofillSelection *)autofillSelection;
-(void)setAutofillSelection:(TSTAutofillSelection *)arg1 ;
@end
