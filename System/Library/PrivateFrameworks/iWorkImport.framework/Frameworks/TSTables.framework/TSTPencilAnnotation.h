/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSTables/TSKPencilAnnotation.h>

@class NSString, TSDPencilAnnotationStorage, TSTTableInfo;

@interface TSTPencilAnnotation : TSPObject <TSKPencilAnnotation> {

	TSDPencilAnnotationStorage* _pencilAnnotationStorage;
	TSTTableInfo* _table;

}

@property (assign,nonatomic,__weak) TSTTableInfo * table;                                         //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) TSDPencilAnnotationStorage * pencilAnnotationStorage;              //@synthesize pencilAnnotationStorage=_pencilAnnotationStorage - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)needsObjectUUID;
-(TSTTableInfo *)table;
-(void)setTable:(TSTTableInfo *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSString *)uuid;
-(void)loadFromArchive:(const PencilAnnotationArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(PencilAnnotationArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSDPencilAnnotationStorage *)pencilAnnotationStorage;
-(id)initWithTableInfo:(id)arg1 pencilAnnotationStorage:(id)arg2 ;
-(id)initWithContext:(id)arg1 tableInfo:(id)arg2 pencilAnnotationStorage:(id)arg3 ;
-(TSUCellRect)_cellRange;
@end
