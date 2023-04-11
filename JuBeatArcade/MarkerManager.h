//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MarkerManager : NSObject
{
    int currentSlot;
    id delegate;
    NSMutableArray *downloadList;
}

+ (BOOL)moveMarkerDataInDoc;
+ (BOOL)enableMarkerSelect;
+ (BOOL)checkRegularMarkerData;
+ (BOOL)convertMarkerList;
+ (BOOL)createDefaultMarkerList;
+ (id)getMarkerBannerPath:(id)arg1;
+ (id)getMarkerPath:(id)arg1;
+ (id)getMarkerDirectoryPath;
+ (void)markerMove:(id)arg1 bannerID:(id)arg2;
+ (void)copyMarkerBanner:(id)arg1;
+ (void)copyMarker:(id)arg1;
+ (void)copyMarkerItem:(id)arg1 isBanner:(BOOL)arg2;
+ (void)saveMarker:(id)arg1 markerID:(id)arg2;
+ (void)pullOutMarkerBanner:(id)arg1 bannerID:(id)arg2;
+ (void)setIgnoreSave:(id)arg1;
+ (BOOL)checkMarkerData:(id)arg1;
+ (BOOL)checkMarkerBannerData:(id)arg1;
+ (void)setMarkerInfo:(id)arg1;
+ (id)getMarkerInfo:(int)arg1;
+ (id)getCurrentMarkerList;
+ (void)setMarkerList:(id)arg1;
+ (id)getMarkerList;
+ (int)getMarkerIndex:(id)arg1;
+ (int)getDefaultMarkerSize;
+ (int)getReservedMarkerSize;
- (void).cxx_destruct;
- (void)setDownloadList:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

